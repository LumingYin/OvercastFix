//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class NSString, SKProduct;

@interface OCStoreRegionalDistrictAssistantManager : NSObject <SKPaymentTransactionObserver, SKProductsRequestDelegate>
{
    SKProduct *_unlockEverythingProduct;
    CDUnknownBlockType _restorePurchasesCompletedBlock;
    CDUnknownBlockType _unlockEverythingPurchaseCompletedBlock;
}

+ (BOOL)userCanMakePurchases;
+ (id)formattedPriceForProduct:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType unlockEverythingPurchaseCompletedBlock; // @synthesize unlockEverythingPurchaseCompletedBlock=_unlockEverythingPurchaseCompletedBlock;
@property(copy, nonatomic) CDUnknownBlockType restorePurchasesCompletedBlock; // @synthesize restorePurchasesCompletedBlock=_restorePurchasesCompletedBlock;
@property(retain, nonatomic) SKProduct *unlockEverythingProduct; // @synthesize unlockEverythingProduct=_unlockEverythingProduct;
- (void).cxx_destruct;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
@property(readonly, nonatomic) NSString *formattedPriceForUnlockEverything;
- (void)purchaseFailedWithProductIdentifier:(id)arg1 error:(id)arg2;
- (void)purchaseCompletedWithProductIdentifier:(id)arg1;
- (void)restorePurchasesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUnlockEverythingPurchaseWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isPurchaseInProgress;
@property(readonly, nonatomic) BOOL didPurchaseUnlockEverything;
- (void)debug_removePurchase;
- (void)fetchProducts;
- (void)dealloc;
- (id)init;

@end

