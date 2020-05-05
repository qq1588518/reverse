//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBVideoFeedbackItem : WBModelObject
{
    long long _type;
    NSString *_desc;
    NSString *_userInputContent;
    NSDictionary *_dataDic;
}

+ (id)defaultItem;
@property(copy, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(copy, nonatomic) NSString *userInputContent; // @synthesize userInputContent=_userInputContent;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

