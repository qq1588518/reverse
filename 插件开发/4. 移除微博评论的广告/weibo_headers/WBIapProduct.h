//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSDictionary, NSError, NSLocale, NSString;

@interface WBIapProduct : NSObject
{
    _Bool _isRetainToPay;
    int _receipt_v;
    float _log_getProductTime;
    float _log_getDisCountTime;
    float _log_payProductTime;
    float _log_requestMapiTime;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSString *_version;
    NSLocale *_priceLocale;
    NSString *_priceLocaleIdentifier;
    NSString *_productIdentifier;
    NSString *_sinaProductId;
    NSString *_callbackScheme;
    NSString *_productDiscount;
    NSString *_tipTitle;
    NSString *_tipContent;
    NSString *_tipLoading;
    NSString *_uniqueIdentify;
    NSDictionary *_schemeParams;
    NSString *_extParam;
    NSString *_schemeExtParam;
    NSString *_quaryStr;
    NSString *_reponseObj;
    NSString *_scheme;
    NSString *_paymentProIndentify;
    NSString *_receipt;
    NSString *_transactionIdentifier;
    long long _transactionTime;
    NSString *_pay_uid;
    NSString *_orderid;
    NSString *_itemid;
    NSString *_receiveReceiptUid;
    NSString *_storageFileName;
    NSDictionary *_originalProductDictionary;
    CDUnknownBlockType _externalCallBack;
    NSError *_error;
    NSError *_originalError;
    NSString *_retainPaymentTitle;
    NSString *_retainPaymentImageUrl;
    unsigned long long _retryCount;
    CDUnknownBlockType _uploadCompleteBlock;
}

+ (id)productWithCreateProductDictionary:(id)arg1;
+ (id)productWithBindInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType uploadCompleteBlock; // @synthesize uploadCompleteBlock=_uploadCompleteBlock;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isRetainToPay; // @synthesize isRetainToPay=_isRetainToPay;
@property(retain, nonatomic) NSString *retainPaymentImageUrl; // @synthesize retainPaymentImageUrl=_retainPaymentImageUrl;
@property(retain, nonatomic) NSString *retainPaymentTitle; // @synthesize retainPaymentTitle=_retainPaymentTitle;
@property(retain, nonatomic) NSError *originalError; // @synthesize originalError=_originalError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType externalCallBack; // @synthesize externalCallBack=_externalCallBack;
@property(retain, nonatomic) NSDictionary *originalProductDictionary; // @synthesize originalProductDictionary=_originalProductDictionary;
@property(retain, nonatomic) NSString *storageFileName; // @synthesize storageFileName=_storageFileName;
@property(retain, nonatomic) NSString *receiveReceiptUid; // @synthesize receiveReceiptUid=_receiveReceiptUid;
@property(retain, nonatomic) NSString *itemid; // @synthesize itemid=_itemid;
@property(retain, nonatomic) NSString *orderid; // @synthesize orderid=_orderid;
@property(retain, nonatomic) NSString *pay_uid; // @synthesize pay_uid=_pay_uid;
@property(nonatomic) long long transactionTime; // @synthesize transactionTime=_transactionTime;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
@property(nonatomic) float log_requestMapiTime; // @synthesize log_requestMapiTime=_log_requestMapiTime;
@property(nonatomic) float log_payProductTime; // @synthesize log_payProductTime=_log_payProductTime;
@property(nonatomic) float log_getDisCountTime; // @synthesize log_getDisCountTime=_log_getDisCountTime;
@property(nonatomic) float log_getProductTime; // @synthesize log_getProductTime=_log_getProductTime;
@property(retain, nonatomic) NSString *paymentProIndentify; // @synthesize paymentProIndentify=_paymentProIndentify;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *reponseObj; // @synthesize reponseObj=_reponseObj;
@property(retain, nonatomic) NSString *quaryStr; // @synthesize quaryStr=_quaryStr;
@property(retain, nonatomic) NSString *schemeExtParam; // @synthesize schemeExtParam=_schemeExtParam;
@property(retain, nonatomic) NSString *extParam; // @synthesize extParam=_extParam;
@property(retain, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams=_schemeParams;
@property(retain, nonatomic) NSString *uniqueIdentify; // @synthesize uniqueIdentify=_uniqueIdentify;
@property(retain, nonatomic) NSString *tipLoading; // @synthesize tipLoading=_tipLoading;
@property(retain, nonatomic) NSString *tipContent; // @synthesize tipContent=_tipContent;
@property(retain, nonatomic) NSString *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(retain, nonatomic) NSString *productDiscount; // @synthesize productDiscount=_productDiscount;
@property(retain, nonatomic) NSString *callbackScheme; // @synthesize callbackScheme=_callbackScheme;
@property(nonatomic) int receipt_v; // @synthesize receipt_v=_receipt_v;
@property(retain, nonatomic) NSString *sinaProductId; // @synthesize sinaProductId=_sinaProductId;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) NSString *priceLocaleIdentifier; // @synthesize priceLocaleIdentifier=_priceLocaleIdentifier;
@property(retain, nonatomic) NSLocale *priceLocale; // @synthesize priceLocale=_priceLocale;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
- (void).cxx_destruct;
- (id)jsonDic;
- (id)uuid;
- (void)initValueFromSKProduct:(id)arg1;
- (id)paramsForNoninfoUpload;
- (id)paramsForUpload;
- (void)updateInfoWithTransaction:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1;
- (id)init;
- (id)bindInfoLogParams;
- (id)bindInfo;

@end

