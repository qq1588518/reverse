//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBWebViewMenuData : NSObject
{
    NSArray *_matches;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchURL:(id)arg1;
- (id)dictionaryRepersentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

