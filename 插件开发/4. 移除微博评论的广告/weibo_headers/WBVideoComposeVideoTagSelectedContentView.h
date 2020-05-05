//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoComposeTagsContentView.h"

@class NSArray, NSString;

@interface WBVideoComposeVideoTagSelectedContentView : WBVideoComposeTagsContentView
{
    NSString *_title;
    CDUnknownBlockType _tapCallbackHandler;
    NSArray *_tagModels;
}

+ (double)heightWithTagModels:(id)arg1 constrainWidth:(double)arg2 tagPadding:(double)arg3 lineSpacing:(double)arg4 numberOfLine:(long long)arg5;
+ (Class)subviewClass;
@property(retain, nonatomic) NSArray *tagModels; // @synthesize tagModels=_tagModels;
@property(copy, nonatomic) CDUnknownBlockType tapCallbackHandler; // @synthesize tapCallbackHandler=_tapCallbackHandler;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)descText;
- (void)itemAction:(id)arg1;
- (void)updateViewWithTitles:(id)arg1 maxWidth:(double)arg2;
- (void)updateViewWithTagModels:(id)arg1 maxWidth:(double)arg2;
- (id)initWithTitle:(id)arg1;

@end

