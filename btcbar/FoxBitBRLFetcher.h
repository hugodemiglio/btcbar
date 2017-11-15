//
//  FoxBitBRLFetcher.h
//  btcbar
//
//  Created by Hugo Leonardo Demiglio on 15/11/2017.
//  Copyright © 2017 nearengine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface FoxBitBRLFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end
