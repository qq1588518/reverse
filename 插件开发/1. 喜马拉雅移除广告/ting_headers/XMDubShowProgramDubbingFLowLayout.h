//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface XMDubShowProgramDubbingFLowLayout : UICollectionViewFlowLayout
{
    long long _preTargetPageNo;
    struct CGPoint _lastProposedContentOffset;
}

@property(nonatomic) long long preTargetPageNo; // @synthesize preTargetPageNo=_preTargetPageNo;
@property(nonatomic) struct CGPoint lastProposedContentOffset; // @synthesize lastProposedContentOffset=_lastProposedContentOffset;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

