//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBFaceMaterialGroup : WBModelObject
{
    NSString *_strGroupID;
    NSString *_strGroupName;
    NSString *_strThumbnailURL;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(copy, nonatomic) NSString *strThumbnailURL; // @synthesize strThumbnailURL=_strThumbnailURL;
@property(copy, nonatomic) NSString *strGroupName; // @synthesize strGroupName=_strGroupName;
@property(copy, nonatomic) NSString *strGroupID; // @synthesize strGroupID=_strGroupID;
- (void).cxx_destruct;
- (_Bool)isValid;
- (_Bool)updateWithDictionary:(id)arg1;

@end

