//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, NSString;

@interface LiveUIDynamicResource : NSObject
{
    NSMutableArray *_imgArray;
    unsigned long long _index;
    NSRecursiveLock *_moduleLock;
    NSString *_localPath;
}

@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSRecursiveLock *moduleLock; // @synthesize moduleLock=_moduleLock;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *imgArray; // @synthesize imgArray=_imgArray;
- (void).cxx_destruct;
- (id)dynamicImage;
- (void)addImageToArray:(id)arg1;
- (void)removeAllImages;
- (id)init;

@end

