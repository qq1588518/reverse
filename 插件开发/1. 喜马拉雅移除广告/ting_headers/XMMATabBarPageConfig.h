//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMATabBarPageConfig : NSObject
{
    NSString *_pagePath;
    NSString *_iconPath;
    NSString *_selectedIconPath;
    NSString *_text;
}

+ (id)loadData:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *selectedIconPath; // @synthesize selectedIconPath=_selectedIconPath;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
- (void).cxx_destruct;

@end

