//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableSet;

@interface SDDJSocketBizManager : NSObject
{
    NSMutableSet *_receivedTCPCommands;
    NSDictionary *_orderStateTCPCommandMapper;
    CDUnknownBlockType _orderStateCallback;
    CDUnknownBlockType _grabCallback;
    CDUnknownBlockType _autopayCallback;
    CDUnknownBlockType _startAddrChangedCallback;
    CDUnknownBlockType _infoflowCallback;
    CDUnknownBlockType _receivedCashCallback;
    CDUnknownBlockType _feeChangedCallback;
    CDUnknownBlockType _remoteDriverDepartCallback;
    CDUnknownBlockType _orderReservedOneHourLeft;
    CDUnknownBlockType _slowCompasationCallback;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType slowCompasationCallback; // @synthesize slowCompasationCallback=_slowCompasationCallback;
@property(copy, nonatomic) CDUnknownBlockType orderReservedOneHourLeft; // @synthesize orderReservedOneHourLeft=_orderReservedOneHourLeft;
@property(copy, nonatomic) CDUnknownBlockType remoteDriverDepartCallback; // @synthesize remoteDriverDepartCallback=_remoteDriverDepartCallback;
@property(copy, nonatomic) CDUnknownBlockType feeChangedCallback; // @synthesize feeChangedCallback=_feeChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType receivedCashCallback; // @synthesize receivedCashCallback=_receivedCashCallback;
@property(copy, nonatomic) CDUnknownBlockType infoflowCallback; // @synthesize infoflowCallback=_infoflowCallback;
@property(copy, nonatomic) CDUnknownBlockType startAddrChangedCallback; // @synthesize startAddrChangedCallback=_startAddrChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType autopayCallback; // @synthesize autopayCallback=_autopayCallback;
@property(copy, nonatomic) CDUnknownBlockType grabCallback; // @synthesize grabCallback=_grabCallback;
@property(copy, nonatomic) CDUnknownBlockType orderStateCallback; // @synthesize orderStateCallback=_orderStateCallback;
@property(retain, nonatomic) NSDictionary *orderStateTCPCommandMapper; // @synthesize orderStateTCPCommandMapper=_orderStateTCPCommandMapper;
@property(retain, nonatomic) NSMutableSet *receivedTCPCommands; // @synthesize receivedTCPCommands=_receivedTCPCommands;
- (void).cxx_destruct;
- (id)orderStateTCPCommands;
- (void)stopSlowCompensationWatchBySocket;
- (void)startSlowCompensationWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)startOrderReservedOneHourLeftWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopRemoteDriverDepartWatchBySocket;
- (void)startRemoteDriverDepartWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopChargeTotalFeeChangedWatchBySocket;
- (void)startChargeTotalFeeChangedWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopChargeCashReceivedWatchBySocket;
- (void)startChargeCashReceivedWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)startInfoflowWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopOrderAutopayWatchBySocket;
- (void)startOrderAutopayWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopOrderInGrabbingWatchBySocket;
- (void)startOrderInGrabbingWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)stopOrderStateChangedWatchBySocket;
- (void)startOrderStateChangedWatchBySocketWithCallback:(CDUnknownBlockType)arg1;
- (void)processOrderStateCommand:(long long)arg1 message:(id)arg2;
- (void)createSocketRecivedProcessor;
- (id)init;

@end
