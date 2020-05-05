//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface XMView : UIView
{
    struct CGSize _lastSize;
    CDUnknownBlockType _layoutSubviewsBlock;
    NSMutableDictionary *_layoutDic;
    struct CGSize _fitSize;
}

@property(retain, nonatomic) NSMutableDictionary *layoutDic; // @synthesize layoutDic=_layoutDic;
@property(copy, nonatomic) CDUnknownBlockType layoutSubviewsBlock; // @synthesize layoutSubviewsBlock=_layoutSubviewsBlock;
@property(nonatomic) struct CGSize fitSize; // @synthesize fitSize=_fitSize;
- (void).cxx_destruct;
- (void)removeAllOfTheLayoutBlocks;
- (void)removeLayoutBlockWithKey:(id)arg1;
- (void)addLayoutBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

