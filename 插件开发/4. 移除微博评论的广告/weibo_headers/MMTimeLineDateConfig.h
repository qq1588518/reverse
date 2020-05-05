//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageTimelineConfigBase.h"

@class UIColor;

@interface MMTimeLineDateConfig : MMMessageTimelineConfigBase
{
    double _leftPadding;
    double _toTagPadding;
    double _toCommentTopPadding;
    double _toTitleTopPadding;
    double _toPictureTopPadding;
    double _toAvatarTopPadding;
    double _rightPadding;
    double _bottomPadding;
    double _bottomNoContentPadding;
    double _textFont;
    UIColor *_textColor;
}

@property(retain) UIColor *textColor; // @synthesize textColor=_textColor;
@property double textFont; // @synthesize textFont=_textFont;
@property double bottomNoContentPadding; // @synthesize bottomNoContentPadding=_bottomNoContentPadding;
@property double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property double rightPadding; // @synthesize rightPadding=_rightPadding;
@property double toAvatarTopPadding; // @synthesize toAvatarTopPadding=_toAvatarTopPadding;
@property double toPictureTopPadding; // @synthesize toPictureTopPadding=_toPictureTopPadding;
@property double toTitleTopPadding; // @synthesize toTitleTopPadding=_toTitleTopPadding;
@property double toCommentTopPadding; // @synthesize toCommentTopPadding=_toCommentTopPadding;
@property double toTagPadding; // @synthesize toTagPadding=_toTagPadding;
@property double leftPadding; // @synthesize leftPadding=_leftPadding;
- (void).cxx_destruct;
- (void)configCommon;

@end

