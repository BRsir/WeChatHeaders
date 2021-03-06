//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTagViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WNArticleControllerDelegate.h"
#import "WNSelectAllViewDelegate.h"

@class FavForwardLogicController, MMTableView, MMTimer, NSString, WNArticleDataController, WNArticleFooterView, WNArticleHeaderView, WNParagraphStyleToolView, WNSelectAllView;

@interface WNArticleViewController : MMUIViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, UIAlertViewDelegate, WNSelectAllViewDelegate, WNArticleControllerDelegate>
{
    WNParagraphStyleToolView *m_toolView;
    WNArticleHeaderView *_headerView;
    WNArticleFooterView *_footerView;
    WNArticleDataController *m_dataController;
    FavForwardLogicController *_favForwardLogicController;
    MMTableView *m_tableView;
    MMTimer *_saveTimer;
    WNSelectAllView *_selectAllView;
    _Bool bDeletePopView;
    _Bool bToShowStopRecordAlert;
    _Bool bEditable;
    id <FavNotePostDelegate> favNotePostDelegate;
}

@property(nonatomic) __weak id <FavNotePostDelegate> favNotePostDelegate; // @synthesize favNotePostDelegate;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
- (void).cxx_destruct;
- (void)updateToolBarHeight:(int)arg1 KeyboardHeight:(double)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (struct CGRect)CGRectConvertWindowRectToCurOri:(struct CGRect)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)BeEditable;
- (void)onSelectAllActionPaste;
- (void)onSelectAllActionCut;
- (void)onSelectAllActionCopy;
- (void)onSelectAllActionDelete;
- (void)onHideSelectAllView;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)realShowStopRecordAlertView;
- (void)onClickCellShowStopRecordingAlert;
- (void)onShowRecordingAlert;
- (void)onEdited;
- (void)onShowFullToolbar;
- (void)hideToolbarView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)onTxtInfoTextLengthExceed;
- (void)onNoneTxtInfoNumExceed;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (id)getViewController;
- (_Bool)isCellVisible:(int)arg1;
- (void)reloadAll;
- (void)scrollToIndex:(long long)arg1;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)insertNewRowAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)insertNewRowAtIndex:(long long)arg1;
- (void)reloadRowsAtIndexArray:(id)arg1;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (id)getFooterViewImage;
- (id)getTableViewimage;
- (id)getNoteImage;
- (double)getTableViewContentHeight;
- (void)realSaveNoteAsImage;
- (void)saveNoteAsImage;
- (void)setConversionOntop:(_Bool)arg1;
- (void)showRecordingAlert:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTimeSave;
- (void)stopAutoSaveTimer;
- (void)startAutoSaveTimer;
- (void)onMenuAction:(id)arg1;
- (void)onForwardNote2WC;
- (void)forwardNote;
- (void)saveNote;
- (void)backupNote;
- (void)disMissSelf;
- (void)configNavbar;
- (void)initTableView;
- (void)initHeaderView;
- (_Bool)shouldShowAddTimeHeader;
- (void)initToolView;
- (void)initUI;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)initData;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

