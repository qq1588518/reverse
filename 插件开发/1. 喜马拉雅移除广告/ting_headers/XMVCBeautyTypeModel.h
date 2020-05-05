//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface XMVCBeautyTypeModel : NSObject <NSCopying>
{
    _Bool _isSkin;
    _Bool _selected;
    _Bool _isOperation;
    float _value;
    NSString *_name;
    NSString *_coverImage;
    NSString *_fxName;
    NSString *_key;
}

+ (id)beautyShapeLevelModel;
+ (id)beautyShapeModels:(id)arg1;
+ (id)beautySkinModels:(id)arg1;
+ (id)beautyShapeWithName:(id)arg1 cover:(id)arg2 fxName:(id)arg3 key:(id)arg4;
+ (id)beautySkinWithName:(id)arg1 cover:(id)arg2 fxName:(id)arg3 key:(id)arg4;
+ (id)beautyWithName:(id)arg1 cover:(id)arg2 fxName:(id)arg3 key:(id)arg4;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *fxName; // @synthesize fxName=_fxName;
@property(nonatomic) _Bool isOperation; // @synthesize isOperation=_isOperation;
@property(copy, nonatomic) NSString *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isSkin; // @synthesize isSkin=_isSkin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int intValue;

@end

