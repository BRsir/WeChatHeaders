//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TXIVideoEncoder;

@interface TXCVideoEncoder : NSObject
{
    TXIVideoEncoder *_videoEncoder;
}

+ (id)encoder:(int)arg1;
- (void).cxx_destruct;
- (long long)encodeFrameCount;
- (long long)realFPS;
- (long long)realBitrate;
- (void)setBitrate:(long long)arg1;
- (void)setNotifyDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)stop;
- (long long)startWith:(struct tagTXSVideoEncoderParam *)arg1;
- (void)dealloc;
- (id)initBy:(int)arg1;

@end

