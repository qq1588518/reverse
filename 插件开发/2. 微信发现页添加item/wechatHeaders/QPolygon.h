//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMultiPoint.h"

@class WAMapPolygonData;

@interface QPolygon : QMultiPoint
{
}

+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(retain, nonatomic) WAMapPolygonData *userData;

@end

