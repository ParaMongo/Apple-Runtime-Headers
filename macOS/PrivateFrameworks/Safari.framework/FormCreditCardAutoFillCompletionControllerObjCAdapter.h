//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/FormCompletionControllerObjCAdapter.h>

@class AutoFillLocalAuthenticationManager;

__attribute__((visibility("hidden")))
@interface FormCreditCardAutoFillCompletionControllerObjCAdapter : FormCompletionControllerObjCAdapter
{
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
}

- (void).cxx_destruct;
-     // Error parsing type: @24@0:8r^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16, name: _itemNameForAutoFillAuthorizationSheetWithItem:
- (void)didRefreshCompletionListItems:(const Vector_e1d4bda3 *)arg1;
- (void)_registerCreditCardAutoFillTableViewCellClasses;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
-     // Error parsing type: c24@0:8r^{CreditCardCompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@@}16, name: _shouldAuthenticateForCreditCardCompletionListItem:
-     // Error parsing type: c24@0:8r^{CreditCardCompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@@}16, name: _shouldShowBiometricPromptForCreditCardCompletionListItem:
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
-     // Error parsing type: c40@0:8r^{CompletionListItem=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}@BQ@@}16^c24^c32, name: performActionForListItem:result:shouldAbortCompletion:
- (double)widthOfWidestCell;
-     // Error parsing type: @24@0:8^{FormCompletionController=^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB@BBB@}16, name: initWithCompletionController:

@end

