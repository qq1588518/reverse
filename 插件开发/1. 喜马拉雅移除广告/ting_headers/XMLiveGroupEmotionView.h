//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseEmoticonView.h"

@class XMLiveGroupEmotion;

@interface XMLiveGroupEmotionView : XMBaseEmoticonView
{
    XMLiveGroupEmotion *_groupEmotion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveGroupEmotion *groupEmotion; // @synthesize groupEmotion=_groupEmotion;
- (id)keyboardIcon;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)loadLiveGroupEmojis;
- (void)willMoveToWindow:(id)arg1;
- (void)willAppear:(_Bool)arg1;
- (void)didInitialize;
- (void)dealloc;

@end

