//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBMediaUploadFileStrategy;

@interface WBMediaUploadFileSettings : WBModelObject
{
    NSString *_upload_id;
    NSString *_media_id;
    WBMediaUploadFileStrategy *_strategy;
    NSString *_auth;
    NSString *_upload_init_log_info;
}

@property(copy, nonatomic) NSString *upload_init_log_info; // @synthesize upload_init_log_info=_upload_init_log_info;
@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) WBMediaUploadFileStrategy *strategy; // @synthesize strategy=_strategy;
@property(copy, nonatomic) NSString *media_id; // @synthesize media_id=_media_id;
@property(copy, nonatomic) NSString *upload_id; // @synthesize upload_id=_upload_id;
- (void).cxx_destruct;
- (id)extraLogData;
- (_Bool)updateWithDictionary:(id)arg1;

@end

