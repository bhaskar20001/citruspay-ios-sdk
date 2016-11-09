# Getting Started  

![CitrusPay logo](http://www.citruspay.com/images/logo.png "CitrusPay") 

## CitrusPay iOS SDK's

### Core SDK V 4.1.0 - CitrusPay.framework

### CitrusGraphics SDK V 1.0 - CitrusGraphics.framework

## Introduction
The CitrusPay iOS SDK enables collection of payments via various payment methods.

It is meant for consumption by [CitrusPay](http://www.citruspay.com) partners who are developing their own iOS apps aimed at merchants and/or consumers.

##Features
CitrusPay iOS SDK broadly offers following features.
+ Prepaid Payments.
+ Direct credit/debit card (CC, DC) or netbanking payments (NB) .
+ Saving Credit/Debit cards into user's account for easier future payments by abiding The Payment Card Industry Data Security Standard (PCI DSS).
+ Loading Money into users Citrus prepaid account for Prepaid facility .
+ Withdraw the money back into User's bank account from the Prepaid account .
+ Creating Citrus account for the user .

####[ChangeLog](https://github.com/citruspay/citruspay-ios-sdk/wiki/ChangeLog)

####[Migration from 3.0.x to 3.1.x or higher](https://github.com/citruspay/citruspay-ios-sdk/wiki/5-Migration-From-V-3.0.x-to-V-3.1.x)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements
+ Xcode 6 or higher.

###Citrus PG Prerequisites
+ You need to enroll with Citrus as a merchant.
+ You need to host Bill generator on your server
+ You need to host Return Url Page on your server. (After the transaction is complete, Citrus posts a response to this URL.)
+ Make sure that you have obtained following parameters from your Citrus admin panel
+ Merchant Secret Key
+ Merchant Access Key
+ SignIn Key
+ SignIn Secret
+ SignUp Key
+ SignUp Secret

Note: Please DO NOT PROCEED if the above mentioned requirements have not been met.

## Installation

##### Everything has a beginning. For using a framework, it's installation.

See the the latest [releases page](https://github.com/citruspay/citruspay-ios-sdk/releases)

#### Using [cocoapods](https://cocoapods.org/) (recommended)
CocoaPods is a dependency manager for Cocoa projects. You can install it with the following command:

~~~{.m}
$ gem install cocoapods
~~~

To integrate CitrusPay into your Xcode project using CocoaPods, specify it to a target in your Podfile:

~~~{.m}
source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'
use_frameworks!

target 'MyApp' do
# your other pod
# ...
pod 'CitrusPay', '~> 4.1.0'
end
~~~

Then, run the following command:

~~~{.m}
$ pod install
~~~
+ Done!

You should open the {Project}.xcworkspace instead of the {Project}.xcodeproj after you installed anything from CocoaPods.

#### Using Submodule
If you do not wish to use CocoaPods then the secondary recommendation is to use a submodule. This allows you to easily track updates using standard Git commands. The first step to installation is to add the submodule to your project:
~~~{.m}
$ cd /path/to/MyApplication
# If this is a new project, initialize git...
$ git init
$ git submodule add git://github.com/citruspay/citruspay-ios-sdk.git
$ git submodule update --init --recursive
$ open citruspay-ios-sdk
~~~
+ Navigate to "Framework" folder & drag "core-sdk" folder into your existing Xcode project
+ Select the target & Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform

#### Or Using Manually
+ Clone it 
~~~{.m}
$ git clone --recursive https://github.com/citruspay/citruspay-ios-sdk.git
$ open citruspay-ios-sdk
~~~
+ Navigate to "Framework" folder & drag "core-sdk" folder into your existing Xcode project
+ In Xcode, go to your app's target settings. On the `Build Phases` tab, expand the `Link Binary With Libraries` section.
+ Include the following framework:
- `CitrusPay.framework`
+ In Xcode, go to your app's target settings. On the `General` tab, expand the `Embedded Binaries` section.
+ Include the following framework:
- `CitrusPay.framework`

##### Add dependency (required for Using Submodule & Manually)
1. JSONModel 
+ Navigate to "Dependency" folder & drag the `JSONModel.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
+ Select the target & Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `JSONModel.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `JSONModel.framework` appropriate to your target's platform

2. CitrusGraphics 
+ Navigate to "Framework" folder & drag "graphics-sdk" folder into your existing Xcode project
+ Select the target & Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `CitrusGraphics.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `CitrusGraphics.framework` appropriate to your target's platform

3. Kingfisher 
+ Navigate to "Dependency" folder & drag the `Kingfisher.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
+ Select the target & Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `Kingfisher.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `Kingfisher.framework` appropriate to your target's platform

+ Link your app to SystemConfiguration.framework
+ Done!

#### Next

After installation, you could import CitrusPay to your project by adding this:

Swift
~~~{.m}
import CitrusPay
~~~

Objective-C
~~~{.m}
#import <CitrusPay/CitrusPay.h>
~~~

to the files in which you want to use this framework.

Once you prepared, continue to have a look at the Documentation to see how to use CitrusPay.

## Documentation
HTML documentation is hosted on our [CitrusPay Developer Guide](http://developers.citruspay.com/ios/iosReg.html).

Git Wiki documentation is available on the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki).

## SDK Organization

### CitrusPay.h
`CitrusPay.h` is the starting point for consuming the SDK, and contains the primary class you will interact with.
It exposes all the methods you can call to accept payments via the supported payment methods.
Detailed reference documentation is available on the reference page for the `CitrusPay` class.

### Data Models
All other classes in the SDK are data models that are used to exchange data between your app and the SDK. 
Detailed reference documentation is available on the reference page for each class.

## Next Steps
Head over to the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki) to see all the API methods available.
When you are ready, look at the samples below to learn how to interact with the SDK.

## Samples

See the [Objective-C Example app](https://github.com/citruspay/citruspay-ios-sdk/tree/master/Objective-CExample) and [Swift Example app](https://github.com/citruspay/citruspay-ios-sdk/tree/master/SwiftExample) for a working implementation of all API methods.

Note: make sure to open the project using `CitrusPay.xcworkspace` and not `CitrusPay.xcodeproj` for Cocoa-Pod Example.

### Initializing the SDK

+ Complete the installation steps (above).

Swift
+ Include CitrusPay
~~~{.m}
import CitrusPay
~~~

Objective-C
+ Include CitrusPay.h
~~~{.m}
#import <CitrusPay/CitrusPay.h>
~~~

####Setup working Enviroments

SDK operates in two different modes Sandbox and Production mode. for both the enviroments Citrus PG Prerequisites key sets are different. keys from one enviroment won't work on other. so please make sure you are using correct set of keys.
During the developement you would always want to use the Sandbox mode. once you are done with your App development you can switch to production mode . 

Swift
~~~{.m}
#if PRODUCTION_MODE
CitrusPaymentSDK.initWithSign(inID: SignInId, signInSecret: SignInSecretKey, signUpID: SubscriptionId, signUpSecret: SubscriptionSecretKey, vanityUrl: VanityUrl, environment: CTSEnvProduction)
#else
CitrusPaymentSDK.initWithSign(inID: SignInId, signInSecret: SignInSecretKey, signUpID: SubscriptionId, signUpSecret: SubscriptionSecretKey, vanityUrl: VanityUrl, environment: CTSEnvSandbox)
#endif
~~~

Objective-C
~~~{.m}
#if PRODUCTION_MODE
[CitrusPaymentSDK initWithSignInID: SignInId signInSecret: SignInSecretKey signUpID: SubscriptionId signUpSecret: SubscriptionSecretKey vanityUrl: VanityUrl environment: CTSEnvProduction];
#else
[CitrusPaymentSDK initWithSignInID: SignInId signInSecret: SignInSecretKey signUpID: SubscriptionId signUpSecret: SubscriptionSecretKey vanityUrl: VanityUrl environment: CTSEnvSandbox];
#endif
~~~

Only after you are done with initialization you can proceed with following guide 

The SDK is logically divided into 3 modules/layers or interfacing classes
+ CTSAuthLayer - handles all of the user creation related tasks .
+ CTSProfileLayer - handles all of the user profile related tasks .
+ CTSPaymentLayer - handles all of the payment related tasks .

To use any of the above layers your need to fetch their singlton instance from CitrusPaymentSDK's class methods,

Swift
~~~{.m}
// initialization in your .m file
var authLayer : CTSAuthLayer?
var profileLayer : CTSProfileLayer?
var paymentLayer : CTSPaymentLayer?

authLayer = CTSAuthLayer.fetchShared()
profileLayer = CTSProfileLayer.fetchShared()
paymentLayer = CTSPaymentLayer.fetchShared()
~~~

Objective-C
~~~{.m}
// initialization in your .m file
CTSAuthLayer * authLayer = [CTSAuthLayer fetchSharedAuthLayer];
CTSProfileLayer * proifleLayer = [CTSProfileLayer fetchSharedProfileLayer];
CTSPaymentLayer * paymentLayer = [CTSPaymentLayer fetchSharedPaymentLayer];
~~~

### Set Logger Level ( By Default it's None )

Swift
~~~{.m}
CitrusPaymentSDK.setLogLevel(.verbose)
~~~

Objective-C
~~~{.m}
[CitrusPaymentSDK setLogLevel:CTSLogLevelVerbose];
~~~


### Get the Card's Schemes & Bank Logo Images
+ [CitrusGraphics SDK Version 1.0](https://github.com/citruspay/open-ios/wiki/CitrusGraphics)

Following are the specific tasks related to each of the layer 

#[Important Update for iOS 9](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#ios-9-ssl-errors--fix)

#####Doing direct payments
+ [CC, DC, NB Direct Payments](https://github.com/citruspay/citruspay-ios-sdk/wiki/Standard-Payment)
+ [Saved CC, DC Payments (A.K.A. Tokenized payments)](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#payment-using-saved-payment-instruments-aka-tokenized-payments)

#####User Management

+ [User Creation/Authentication Flow](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#citrus-wallet-user-creation)
+  [See if anyone is logged in](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#see-if-anyone-is-logged-in)
+ [Reset User Password](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#reset-user-password)
+ [Sign Out](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#sign-out)

#####Card Management
+ [Save User Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#update--store-users-payment-information)
+ [Get Saved Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#get-wallet--request-payment-information)
+ [Delete Saved Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#delete-saved-cards)

#####Using Citrus Cash a.k.a Prepaid Account
+ [Get User's Citrus Cash Balance](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#get-users-prepaid-balance)
+ [Loading Money into Users Citrus Cash Account](https://github.com/citruspay/citruspay-ios-sdk/wiki/Wallet-Payments#load-money-into-users-citrus-prepaid-account)
+ [Paying via Citrus Cash account](https://github.com/citruspay/citruspay-ios-sdk/wiki/Wallet-Payments#payment-using-prepaid-citrus-cash-if-the-prepaid-balance-is-sufficient)
+ [Save Cashout Bank Account](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#save-cash-out-bank-account)
+ [Get Saved Cashout Bank Acoount](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#get-saved-cashout-bank-acoount)
+ [Initiate Cashout Proccess into users Bank Account from Citrus Cash  account](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#initiate-cashout-process-into-users-account-from-citrus-prepaid-account)
+ [Send Citrus Cash to another Citrus User](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#send-money-to-another-citrus-user)

#####Dynamic Pricing Offer Coupons and Surcharge
+ [How to use dynamic pricing ?](https://github.com/citruspay/citruspay-ios-sdk/wiki/Dynamic-Pricing-and-Surcharge)

#####One Tap Payment
+ [What is One Tap Payment? ](https://github.com/citruspay/citruspay-ios-sdk/wiki/One-Tap-Payment)


#####Others
+ [Fetch Available Schemes and Banks for the Merchant and for Load Money in Citrus Cash](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#fetch-available-schemes-and-banks-for-the-merchant-and-for-load-money)

=====
####[Common Integration Issues](https://github.com/citruspay/open-ios/wiki/4.-Common-Errors)
+ [Could Not Connect to Internet](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#could-not-connect-to-internet)
+ [postResponseiOS() error](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#postresponseios-error)
+ [iOS 9 SSL Errors](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#ios-9-ssl-errors--fix)

#[Important Instructions for the Releasing to Apple](https://github.com/citruspay/citruspay-ios-sdk/wiki/Releasing-to-Apple)
