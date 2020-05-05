//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSIndexPath, NSString, WBPageVideoFoodCardState;

@interface WBPageVideoFoodCard : WBPageCard
{
    _Bool _needTitle;
    NSArray *_items;
    NSString *_arrowImageUrl;
    NSString *_titleImageUrl;
    NSString *_contentColor;
    NSString *_textColor;
    NSString *_buttonBackground;
    NSString *_buttonTitleColor;
    NSString *_keyboardIconUrl;
    NSString *_emojiIconUrl;
    NSString *_danmakuOff;
    NSString *_danmakuOn;
    WBPageVideoFoodCardState *_currentState;
    long long _playingChannelIndex;
    long long _playingVideoIndex;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (Class)viewClass;
@property(nonatomic) long long playingVideoIndex; // @synthesize playingVideoIndex=_playingVideoIndex;
@property(nonatomic) long long playingChannelIndex; // @synthesize playingChannelIndex=_playingChannelIndex;
@property(retain, nonatomic) WBPageVideoFoodCardState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool needTitle; // @synthesize needTitle=_needTitle;
@property(retain, nonatomic) NSString *danmakuOn; // @synthesize danmakuOn=_danmakuOn;
@property(retain, nonatomic) NSString *danmakuOff; // @synthesize danmakuOff=_danmakuOff;
@property(retain, nonatomic) NSString *emojiIconUrl; // @synthesize emojiIconUrl=_emojiIconUrl;
@property(retain, nonatomic) NSString *keyboardIconUrl; // @synthesize keyboardIconUrl=_keyboardIconUrl;
@property(retain, nonatomic) NSString *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
@property(retain, nonatomic) NSString *buttonBackground; // @synthesize buttonBackground=_buttonBackground;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) NSString *titleImageUrl; // @synthesize titleImageUrl=_titleImageUrl;
@property(retain, nonatomic) NSString *arrowImageUrl; // @synthesize arrowImageUrl=_arrowImageUrl;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)previousStatus;
- (id)previousIndexPath;
- (id)nextStatus;
- (id)nextIndexPath;
- (id)statusAtIndexPath:(id)arg1;
- (id)currentStatus;
- (id)itemAtIndex:(long long)arg1;
- (id)currentDisplayItem;
- (id)currentItem;
- (void)setPlayingIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (unsigned long long)indexForCurrentDispalySection;
@property(nonatomic) unsigned long long displayItemIndex;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) _Bool userDidChangeSpeed;
@property(nonatomic) double playbackSpeed;
@property(nonatomic) _Bool expanded;
- (void)uptateSchemePlayForIndex;
- (_Bool)updateWithDictionary:(id)arg1;

@end

