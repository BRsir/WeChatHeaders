//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAAudioPlayerInterface.h"
#import "WAAudioSourceDelegate.h"

@class AVPlayer, NSData, NSObject<WAAudioSource>, NSOperation, NSString, NSURL;

@interface WAGameAudioPlayer : MMObject <WAAudioSourceDelegate, WAAudioPlayerInterface>
{
    long long _state;
    NSString *_src;
    NSURL *_url;
    NSData *fileData;
    NSObject<WAAudioSource> *source;
    _Bool _loop;
    _Bool muted;
    _Bool playAfterLoad;
    float volume;
    float playbackRate;
    NSOperation *loadCallback;
    NSOperation *loadOp;
    _Bool _autoLoop;
    _Bool _autoPlay;
    _Bool _obeyMuteSwitch;
    _Bool _forcePaused;
    id <IWAAudioPlayerDelegate> _delegate;
    AVPlayer *_player;
    NSString *_appId;
    NSString *_audioId;
    double _startTime;
    double _duration;
    double _curTime;
    double _bufferTime;
}

@property(nonatomic) _Bool forcePaused; // @synthesize forcePaused=_forcePaused;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double curTime; // @synthesize curTime=_curTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IWAAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sourceDidError:(id)arg1 error:(id)arg2;
- (void)sourceDidFinishPlaying:(id)arg1;
- (void)sourceSeeked:(id)arg1;
- (void)sourceSeeking:(id)arg1;
- (void)sourceStop:(id)arg1;
- (void)sourcePaused:(id)arg1;
- (void)sourceStartPlaying:(id)arg1;
- (void)setState:(long long)arg1;
- (void)activeAudioSession;
- (void)endLoad;
- (void)backgroundLoad;
- (void)prepareGarbageCollection;
- (void)load;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6;
- (void)dealloc;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long state;
@property(readonly) Class superclass;

@end

