//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RTLabelDelegate-Protocol.h"

@class NSOperationQueue, NSString, RCLabel, UIColor, UIImage;
@protocol XMRCLabelDelegate;

@interface XMRCLabel : UIView <RTLabelDelegate>
{
    RCLabel *_rcLabel;
    _Bool _tryFromCache;
    id <XMRCLabelDelegate> delegate;
    UIColor *_linkClickColor;
    UIImage *_cacheImage;
    NSOperationQueue *_renderQueue;
    struct CGSize imgSize;
}

+ (void)xmRCLabelCacheClear;
+ (id)cachePathAtCacheDirWithCleanOld:(_Bool)arg1 createIfNotExsit:(_Bool)arg2 dirName:(id)arg3;
+ (_Bool)cacheTextRenderResultWithKey:(id)arg1 image:(id)arg2;
+ (id)xmRCLabelComponentsStructureFromText:(id)arg1;
+ (id)getCurrentCacheKeyWithRclabel:(id)arg1;
+ (struct CGSize)xmRCLabelRenderWithText:(id)arg1 andWidth:(double)arg2 andfont:(id)arg3;
+ (struct CGSize)imageSize20;
+ (struct CGSize)optimumSize4Text:(id)arg1 font:(id)arg2 width:(double)arg3 imgSize:(struct CGSize)arg4;
+ (struct CGSize)optimumSize4Text:(id)arg1 font:(id)arg2 width:(double)arg3;
@property(retain, nonatomic) NSOperationQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(retain, nonatomic) UIColor *linkClickColor; // @synthesize linkClickColor=_linkClickColor;
@property(nonatomic) _Bool tryFromCache; // @synthesize tryFromCache=_tryFromCache;
@property(nonatomic) __weak id <XMRCLabelDelegate> delegate; // @synthesize delegate;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
- (void).cxx_destruct;
- (void)rtLabelGetRenderedResultWithLabel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)rtLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)getTextRenderResultFromCacheWithComplete:(CDUnknownBlockType)arg1;
- (struct CGSize)optimumSize;
- (void)setText:(id)arg1;
- (void)setLineSpace:(double)arg1;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

