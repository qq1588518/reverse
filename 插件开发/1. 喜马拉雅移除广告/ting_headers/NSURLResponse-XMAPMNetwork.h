//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLResponse.h>

@interface NSURLResponse (XMAPMNetwork)
- (unsigned long long)xm_totalBytesExpectedDownloadSize;
- (void)xm_setTotalBytesExpectedDownloadSize:(long long)arg1;
- (unsigned long long)xm_totalBytesDidDownloadSize;
- (void)xm_setTotalBytesDidDownloadSize:(long long)arg1;
- (long long)downloadSize;
- (void)setDownloadedSize:(long long)arg1;
- (void)appendData:(id)arg1;
- (id)mutableBodyData;
- (unsigned long long)getBodySize;
- (unsigned long long)xmapm_getHeaderLength;
@end

