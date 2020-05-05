//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface XMVDataUnitQueue : NSObject
{
    NSString *_path;
    NSMutableArray *_unitArray;
    NSMutableArray *_unArchiveUnits;
}

+ (id)queueWithPath:(id)arg1;
@property(retain, nonatomic) NSMutableArray *unArchiveUnits; // @synthesize unArchiveUnits=_unArchiveUnits;
@property(retain, nonatomic) NSMutableArray *unitArray; // @synthesize unitArray=_unitArray;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)unArchiveUnit:(id)arg1;
- (void)archive;
- (void)popUnit:(id)arg1;
- (void)putUnit:(id)arg1;
- (id)unitWithKey:(id)arg1;
- (id)allUnits;
- (id)initWithPath:(id)arg1;

@end

