//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WDirectionalGroupMessageViewControllerSearchingCache : NSObject
{
    NSString *_keyword;
    NSArray *_searchingResult;
}

+ (id)cacheWithKeyword:(id)arg1 andSearchingResult:(id)arg2;
@property(retain, nonatomic) NSArray *searchingResult; // @synthesize searchingResult=_searchingResult;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end

