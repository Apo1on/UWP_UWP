#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "Modul.h"
using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::UUWWPP::implementation
{
    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    
}


void winrt::UUWWPP::implementation::MainPage::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
    int a = stoi(to_string(Aper().Text()));
    int b = stoi(to_string(Bper().Text()));


    Proz().Text(to_hstring(ABProz(a, b)));
    Sum().Text(to_hstring(ABSum(a, b)));
    Raz().Text(to_hstring(ABRaz(a, b)));
}

