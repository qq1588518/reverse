//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoEffectsParam.h"

@interface TXCVEFRockLightParam : TXCVideoEffectsParam
{
    float _zMin;
    float _zMax;
    float _duration;
    float _current;
    struct CGPoint _center;
    struct CGPoint _rOffset;
    struct CGPoint _gOffset;
    struct CGPoint _bOffset;
}

@property(nonatomic) struct CGPoint bOffset; // @synthesize bOffset=_bOffset;
@property(nonatomic) struct CGPoint gOffset; // @synthesize gOffset=_gOffset;
@property(nonatomic) struct CGPoint rOffset; // @synthesize rOffset=_rOffset;
@property(nonatomic) float current; // @synthesize current=_current;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float zMax; // @synthesize zMax=_zMax;
@property(nonatomic) float zMin; // @synthesize zMin=_zMin;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

