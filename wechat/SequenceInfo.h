//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface SequenceInfo : NSObject <PBCoding>
{
    unsigned int MoreView_Seq;
    unsigned int Setting_Seq;
    unsigned int Privacy_Seq;
    unsigned int RecentOption_Seq;
    unsigned int General_Seq;
    unsigned int Plugin_Seq;
}

+ (void)initialize;
@property(nonatomic) unsigned int Plugin_Seq; // @synthesize Plugin_Seq;
@property(nonatomic) unsigned int General_Seq; // @synthesize General_Seq;
@property(nonatomic) unsigned int RecentOption_Seq; // @synthesize RecentOption_Seq;
@property(nonatomic) unsigned int Privacy_Seq; // @synthesize Privacy_Seq;
@property(nonatomic) unsigned int Setting_Seq; // @synthesize Setting_Seq;
@property(nonatomic) unsigned int MoreView_Seq; // @synthesize MoreView_Seq;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
