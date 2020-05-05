//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTDASIDataDecompressor : NSObject
{
    _Bool streamReady;
    struct z_stream_s zStream;
}

+ (id)inflateErrorWithCode:(int)arg1;
+ (_Bool)uncompressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)uncompressData:(id)arg1 error:(id *)arg2;
+ (id)decompressor;
@property(readonly) _Bool streamReady; // @synthesize streamReady;
- (id)uncompressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)closeStream;
- (id)setupStream;
- (void)dealloc;

@end

