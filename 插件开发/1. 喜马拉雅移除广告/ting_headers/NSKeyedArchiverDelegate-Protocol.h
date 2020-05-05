//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSKeyedArchiver;

@protocol NSKeyedArchiverDelegate <NSObject>

@optional
- (void)archiverDidFinish:(NSKeyedArchiver *)arg1;
- (void)archiverWillFinish:(NSKeyedArchiver *)arg1;
- (void)archiver:(NSKeyedArchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (void)archiver:(NSKeyedArchiver *)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(NSKeyedArchiver *)arg1 willEncodeObject:(id)arg2;
@end

