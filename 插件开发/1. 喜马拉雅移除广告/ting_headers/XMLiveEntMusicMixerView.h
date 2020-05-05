//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPopSubview.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "XMPopSubviewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UILabel, UISlider, XMLiveEntMusicMicManager;

@interface XMLiveEntMusicMixerView : XMPopSubview <UICollectionViewDataSource, UICollectionViewDelegate, XMPopSubviewDelegate>
{
    XMLiveEntMusicMicManager *_micManager;
    long long _curMixIndex;
    NSArray *_mixerArray;
    UILabel *_titleLabel;
    UILabel *_voiceLabel;
    UISlider *_voiceSlider;
    UILabel *_soundLabel;
    UISlider *_soundSlider;
    UILabel *_mixLabel;
    UICollectionView *_mixCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *mixCollection; // @synthesize mixCollection=_mixCollection;
@property(retain, nonatomic) UILabel *mixLabel; // @synthesize mixLabel=_mixLabel;
@property(retain, nonatomic) UISlider *soundSlider; // @synthesize soundSlider=_soundSlider;
@property(retain, nonatomic) UILabel *soundLabel; // @synthesize soundLabel=_soundLabel;
@property(retain, nonatomic) UISlider *voiceSlider; // @synthesize voiceSlider=_voiceSlider;
@property(retain, nonatomic) UILabel *voiceLabel; // @synthesize voiceLabel=_voiceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *mixerArray; // @synthesize mixerArray=_mixerArray;
@property(nonatomic) long long curMixIndex; // @synthesize curMixIndex=_curMixIndex;
@property(retain, nonatomic) XMLiveEntMusicMicManager *micManager; // @synthesize micManager=_micManager;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onSliderValueChange:(id)arg1;
- (void)onPopViewDidHide;
- (void)showWithAnimate:(_Bool)arg1;
- (void)initFilterConfig;
- (void)updateSubviewsConstrant;
- (void)addCustomedView;
- (id)initPopFromView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

