//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTAntiSpamClickData : NSObject
{
    long long _touchBeginTime;
    long long _touchEndTime;
    long long _clickArea;
    struct CGPoint _touchBeginPoint;
    struct CGPoint _touchEndPoint;
    struct CGSize _viewSize;
    struct CGPoint _adToScreenOrigin;
    struct CGSize _validateArea;
}

@property(nonatomic) long long clickArea; // @synthesize clickArea=_clickArea;
@property(nonatomic) struct CGSize validateArea; // @synthesize validateArea=_validateArea;
@property(nonatomic) struct CGPoint adToScreenOrigin; // @synthesize adToScreenOrigin=_adToScreenOrigin;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGPoint touchEndPoint; // @synthesize touchEndPoint=_touchEndPoint;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(nonatomic) long long touchEndTime; // @synthesize touchEndTime=_touchEndTime;
@property(nonatomic) long long touchBeginTime; // @synthesize touchBeginTime=_touchBeginTime;
@property(readonly, nonatomic) struct CGSize screenSize;

@end

