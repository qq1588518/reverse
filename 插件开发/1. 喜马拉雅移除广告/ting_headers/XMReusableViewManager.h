//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XMReusableViewManager : NSObject
{
    NSMutableDictionary *_reusableViewSetDictionary;
    NSMutableDictionary *_creatorDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *creatorDictionary; // @synthesize creatorDictionary=_creatorDictionary;
@property(retain, nonatomic) NSMutableDictionary *reusableViewSetDictionary; // @synthesize reusableViewSetDictionary=_reusableViewSetDictionary;
- (void).cxx_destruct;
- (void)unregisterCreator:(id)arg1 forReuseIdentifier:(id)arg2;
- (void)registerCreator:(id)arg1 forReuseIdentifier:(id)arg2;
- (id)reusableViewSetForIdentifier:(id)arg1;
- (void)queueReusableView:(id)arg1 identifier:(id)arg2;
- (void)queueReusableView:(id)arg1;
- (id)dequeueReusableViewWidthIdentifier:(id)arg1 model:(id)arg2 userInfo:(id)arg3;
- (id)dequeueReusableViewWidthIdentifier:(id)arg1 model:(id)arg2;
- (id)dequeueReusableViewWidthIdentifier:(id)arg1;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)didReceiveMemoryWarningNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

