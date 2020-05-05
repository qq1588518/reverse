//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QQuadTreeNode : NSObject
{
    unsigned long long _bucketCapacity;
    QQuadTreeNode *_northWest;
    QQuadTreeNode *_northEast;
    QQuadTreeNode *_southWest;
    QQuadTreeNode *_southEast;
    NSMutableArray *_nodeDatas;
    struct CGRect _boundingBox;
}

+ (id)nodeWithCapacity:(unsigned long long)arg1 box:(struct CGRect)arg2;
@property(retain, nonatomic) NSMutableArray *nodeDatas; // @synthesize nodeDatas=_nodeDatas;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) QQuadTreeNode *southEast; // @synthesize southEast=_southEast;
@property(retain, nonatomic) QQuadTreeNode *southWest; // @synthesize southWest=_southWest;
@property(retain, nonatomic) QQuadTreeNode *northEast; // @synthesize northEast=_northEast;
@property(retain, nonatomic) QQuadTreeNode *northWest; // @synthesize northWest=_northWest;
@property(nonatomic) unsigned long long bucketCapacity; // @synthesize bucketCapacity=_bucketCapacity;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1 box:(struct CGRect)arg2;
- (id)dataInRange:(struct CGRect)arg1;
- (void)enumerateDataInRange:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)traverseUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)insertData:(id)arg1;
- (void)subdivide;

@end

