//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTLayerContainer.h"

@class CALayer, NSArray, NSNumber;

@interface LOTCompositionContainer : LOTLayerContainer
{
    NSArray *_childLayers;
    NSNumber *_frameOffset;
    CALayer *DEBUG_Center;
}

- (void).cxx_destruct;
- (void)logHierarchyKeypathsWithParent:(id)arg1;
- (void)setViewportBounds:(struct CGRect)arg1;
- (void)addSublayer:(id)arg1 toLayerNamed:(id)arg2 applyTransform:(_Bool)arg3;
- (_Bool)setValue:(id)arg1 forKeypath:(id)arg2 atFrame:(id)arg3;
- (void)displayWithFrame:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)intializeWithChildGroup:(id)arg1 withAssetGroup:(id)arg2;
- (id)initWithModel:(id)arg1 inLayerGroup:(id)arg2 withLayerGroup:(id)arg3 withAssestGroup:(id)arg4;

@end

