//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMShortcutsManager : NSObject
{
}

+ (_Bool)deleteAllInteractions;
+ (void)handleUserActivity:(id)arg1;
+ (_Bool)canHandleUserActivity:(id)arg1;
+ (void)suggestIntentURL:(id)arg1 title:(id)arg2 detail:(id)arg3 iconImage:(id)arg4;
+ (void)handleShortcutsWithActivityType:(id)arg1;
+ (void)initSiriKit;
+ (void)initShortsCutSuggestion;

@end

