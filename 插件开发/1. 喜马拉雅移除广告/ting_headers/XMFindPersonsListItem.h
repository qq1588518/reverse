//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface XMFindPersonsListItem : NSObject
{
    int _personType;
    int _cellShowType;
    unsigned long long _listId;
    NSString *_title;
    NSString *_categoryName;
    NSMutableArray *_personList;
}

+ (unsigned long long)CellNumberPerLine;
@property(nonatomic) int cellShowType; // @synthesize cellShowType=_cellShowType;
@property(nonatomic) int personType; // @synthesize personType=_personType;
@property(retain, nonatomic) NSMutableArray *personList; // @synthesize personList=_personList;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (void)updataDataWithDic:(id)arg1;
- (id)init;
- (void)dealloc;

@end

