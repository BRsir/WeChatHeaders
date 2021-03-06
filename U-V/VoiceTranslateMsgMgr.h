//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "VoiceTransDelegate.h"

@class NSMutableArray, NSString, SessionVoiceTranslateInfos, VoiceTransHelper, VoiceTranslateInfo, VoiceTranslateUtil;

@interface VoiceTranslateMsgMgr : MMService <VoiceTransDelegate, MMService>
{
    VoiceTranslateUtil *m_oVoiceTranslateUtil;
    VoiceTranslateInfo *m_oCurrentTranslateInfo;
    VoiceTransHelper *m_oVoiceTransHelper;
    NSMutableArray *m_oTranslateTaskArray;
    SessionVoiceTranslateInfos *m_oSessionTranslateInfo;
}

- (void).cxx_destruct;
- (void)onVoiceTransFail:(id)arg1;
- (void)onVoiceTransEnd:(id)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(id)arg1 Result:(id)arg2;
- (void)onVoiceTransBegin:(id)arg1;
- (void)CheckQueue;
- (void)translateVoiceMessage:(id)arg1;
- (void)stopVoiceTranslate:(id)arg1;
- (void)cleanSessionTransInfos:(id)arg1;
- (void)stopAllScrollUp;
- (id)loadSessionTransInfos:(id)arg1;
- (void)checkSessionInfos:(id)arg1;
- (void)removeTranslateInfo:(id)arg1;
- (void)addTranslateInfo:(id)arg1 ChatName:(id)arg2;
- (id)getTranslateInfo:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

