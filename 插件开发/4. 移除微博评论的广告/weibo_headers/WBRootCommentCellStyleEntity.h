//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFeedStyleEntity.h"

@class UIColor, WBCommentHeaderViewStyleEntity;

@interface WBRootCommentCellStyleEntity : WBFeedStyleEntity
{
    float _commentImageViewAlpha;
    UIColor *_contentAttributedTextColor;
    WBCommentHeaderViewStyleEntity *_headerStyleEntity;
}

@property(retain, nonatomic) WBCommentHeaderViewStyleEntity *headerStyleEntity; // @synthesize headerStyleEntity=_headerStyleEntity;
@property(nonatomic) float commentImageViewAlpha; // @synthesize commentImageViewAlpha=_commentImageViewAlpha;
@property(retain, nonatomic) UIColor *contentAttributedTextColor; // @synthesize contentAttributedTextColor=_contentAttributedTextColor;
- (void).cxx_destruct;
- (void)setupStyle:(long long)arg1;

@end

