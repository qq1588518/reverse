//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBStatusComplaintInfo : WBModelObject
{
    NSString *desc;
    NSString *url;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
- (void).cxx_destruct;
- (void)dealloc;
- (id)primaryKey;
@property(readonly) __weak NSString *validURL;
- (id)dictionaryWithValues;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;

@end

