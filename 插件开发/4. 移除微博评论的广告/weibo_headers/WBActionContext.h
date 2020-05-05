//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WBViewController;
@protocol WBActionHandlerContextProtocol;

@interface WBActionContext : NSObject
{
    WBViewController<WBActionHandlerContextProtocol> *_controller;
    NSMutableDictionary *_params;
    NSDictionary *_analysisParams;
}

@property(retain, nonatomic) NSDictionary *analysisParams; // @synthesize analysisParams=_analysisParams;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak WBViewController<WBActionHandlerContextProtocol> *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;

@end

