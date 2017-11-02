//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSArray, NSString, POIInfo, UIColor, UIView<YYWebViewInterface>, UIViewController, WCCanvasComponent, WCCanvasReportMgr;

@protocol WCCanvasComponentDelegate <NSObject>
- (void)setLoading:(_Bool)arg1;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willJumpToCanvas:(NSString *)arg2;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willShowViewController:(MMUIViewController *)arg2;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willAddViewController:(MMUIViewController *)arg2;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willExistAndJumpUrl:(NSString *)arg2;

@optional
- (NSString *)getWeAppSceneNoteForComponent:(WCCanvasComponent *)arg1;
- (void)reloadData;
- (void)jumpToPhonePage:(NSArray *)arg1;
- (void)jumpToLocationPage:(POIInfo *)arg1;
- (NSString *)getAdUxInfo;
- (WCCanvasReportMgr *)getReportMgr;
- (void)jumpStreamVideoForSightComponent:(WCCanvasComponent *)arg1;
- (UIView<YYWebViewInterface> *)getCacheWebviewWithUrl:(NSString *)arg1;
- (UIViewController *)getCurrentViewController;
- (void)getCanvasScene:(int *)arg1;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (UIColor *)getBackGroundColorWhenLoading:(long long)arg1;
- (void)hideDownArrowIcon;
- (_Bool)secionHasShowDownArrow:(long long)arg1;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)canvasComponent:(WCCanvasComponent *)arg1 shouldForceHideArrowDownImage:(_Bool)arg2;
@end
