//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, XMUBTBindingAttributesModel><Optional;

@interface XMUBTBindingPageDepartureModel : JSONModel
{
    long long _dataId;
    NSString *_name;
    NSString<Optional> *_desc;
    NSNumber<Optional> *_metaId;
    NSArray<XMUBTBindingAttributesModel><Optional> *_attrs;
}

@property(copy, nonatomic) NSArray<XMUBTBindingAttributesModel><Optional> *attrs; // @synthesize attrs=_attrs;
@property(retain, nonatomic) NSNumber<Optional> *metaId; // @synthesize metaId=_metaId;
@property(copy, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long dataId; // @synthesize dataId=_dataId;
- (void).cxx_destruct;

@end

