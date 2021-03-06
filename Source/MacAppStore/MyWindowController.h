//
//  MyWindowController.h
//  MediaInfo
//
//  Created by Max Pozdeev on 07.02.12.
//  Copyright 2012 Jerome Martinez. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "oMediaInfoList.h"
#import "HyperlinkButton.h"

@interface MyWindowController : NSWindowController {
	
	IBOutlet NSArrayController *comboController;
	IBOutlet NSTabView *tabs;
	IBOutlet NSSegmentedControl *tabSelector;
	IBOutlet NSOutlineView *treeOutline;
	IBOutlet NSTreeController *treeOutlineController;
	IBOutlet NSTextView *textField;
	
	IBOutlet NSTextField *easyGeneralTextLeft;
	IBOutlet NSTextField *easyGeneralTextRight;
	IBOutlet HyperlinkButton *easyGeneralLinkButton;
	IBOutlet NSArrayController *easyStreamsController;
	IBOutlet NSTableView *easyTable;
	
	oMediaInfoList *mediaList;
	NSInteger selectedFileIndex;
}

//@property (assign) NSInteger selectedFileIndex;

-(IBAction)openFile:(id)sender;
-(IBAction)clickOnViewSelector:(id)sender;
-(IBAction)selectTreeTab:(id)sender;
-(IBAction)selectTextTab:(id)sender;
-(IBAction)export:(id)sender;


-(NSInteger)selectedFileIndex;
-(void)setSelectedFileIndex:(NSInteger)index;

-(void)processFiles:(NSArray *)URLs;
-(void)showFileAtIndex:(NSUInteger)index;
-(void)updateEasyTabWithFileAtIndex:(NSUInteger)index;

@end
