//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString, UIColor;

@interface WBGroupSettingRow : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _on;
    _Bool _isSelected;
    int _apperanceType;
    int _actionType;
    int _groupActionType;
    NSString *_text;
    NSString *_detail;
    NSString *_customString;
    UIColor *_textColor;
    UIColor *_detailTextColor;
    double _rowHeight;
}

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(nonatomic) int groupActionType; // @synthesize groupActionType=_groupActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int apperanceType; // @synthesize apperanceType=_apperanceType;
@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *customString; // @synthesize customString=_customString;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

