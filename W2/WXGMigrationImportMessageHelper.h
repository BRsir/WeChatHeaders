//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMMNewSessionMgrExt.h"
#import "WXGImportMessageHelperDelegate.h"

@class NSOperationQueue, NSString, WXGImportMessageHelper, WXGMigrationMsgItemDB;

@interface WXGMigrationImportMessageHelper : NSObject <IMMNewSessionMgrExt, WXGImportMessageHelperDelegate>
{
    _Bool m_bImporting;
    NSOperationQueue *m_operationQueue;
    WXGImportMessageHelper *m_importMessageHelper;
    WXGMigrationMsgItemDB *m_msgItemDB;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcesCount;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    id <WXGMigrationImportMessageHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationImportMessageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onImportOneMsgItem;
- (void)onSessionRebuildEnd;
- (void)p_oldImportThread;
- (void)p_importThread;
- (void)cancelImport;
- (void)stopImport;
- (void)startImport;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

