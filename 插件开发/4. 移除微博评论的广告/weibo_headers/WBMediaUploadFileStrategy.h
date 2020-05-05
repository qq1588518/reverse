//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBMediaUploadFileStrategyEncode;

@interface WBMediaUploadFileStrategy : WBModelObject
{
    NSString *_upload_protocol;
    long long _chunk_size;
    long long _chunk_retry;
    long long _chunk_delay;
    long long _chunk_timeout;
    long long _chunk_read_timeout;
    long long _max_gop_duration;
    long long _min_piece_video_duration;
    long long _threads;
    NSString *_url_tag;
    WBMediaUploadFileStrategyEncode *_encode;
    NSString *_idc;
    long long _wait_timeout;
    long long _chunk_slow_speed;
}

@property(nonatomic) long long chunk_slow_speed; // @synthesize chunk_slow_speed=_chunk_slow_speed;
@property(nonatomic) long long wait_timeout; // @synthesize wait_timeout=_wait_timeout;
@property(copy, nonatomic) NSString *idc; // @synthesize idc=_idc;
@property(retain, nonatomic) WBMediaUploadFileStrategyEncode *encode; // @synthesize encode=_encode;
@property(copy, nonatomic) NSString *url_tag; // @synthesize url_tag=_url_tag;
@property(nonatomic) long long threads; // @synthesize threads=_threads;
@property(nonatomic) long long min_piece_video_duration; // @synthesize min_piece_video_duration=_min_piece_video_duration;
@property(nonatomic) long long max_gop_duration; // @synthesize max_gop_duration=_max_gop_duration;
@property(nonatomic) long long chunk_read_timeout; // @synthesize chunk_read_timeout=_chunk_read_timeout;
@property(nonatomic) long long chunk_timeout; // @synthesize chunk_timeout=_chunk_timeout;
@property(nonatomic) long long chunk_delay; // @synthesize chunk_delay=_chunk_delay;
@property(nonatomic) long long chunk_retry; // @synthesize chunk_retry=_chunk_retry;
@property(nonatomic) long long chunk_size; // @synthesize chunk_size=_chunk_size;
@property(copy, nonatomic) NSString *upload_protocol; // @synthesize upload_protocol=_upload_protocol;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

