//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, NSString;

@protocol WAGameContextDelegate <NSObject>
- (void)onAfterGameBridgeScriptEvaluated;
- (void)performSelectorOnService:(NSObject *)arg1 selector:(SEL)arg2 withObject:(NSObject *)arg3;
- (struct OpaqueJSContext *)getContext;
- (NSString *)getAppId;
@end

