//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WB3dPostModelItem : WBModelObject
{
    NSString *_format;
    NSString *_url;
    NSString *_fileName;
    double _size;
    NSString *_resolution;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) double size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)updateURL:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

