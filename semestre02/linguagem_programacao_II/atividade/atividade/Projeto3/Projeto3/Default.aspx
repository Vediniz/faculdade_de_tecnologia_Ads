<%@ Page Title="" Language="C#" MasterPageFile="~/Projeto.Master" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Projeto3.Default" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>

<asp:Content ID="Content2" ContentPlaceHolderID="Content" runat="server">
    <div class="padding-lr">
        <!-- SLIDES -->
        <div class="flexslider" style="direction: rtl;">
            <ul class="slides">
                <li>
                    <img src="Images/banner0.png" />
                </li>

                <li>
                    <img src="Images/banner1.png" />
                </li>

                <li>
                    <img src="Images/banner2.png" />
                </li>
                               
            </ul>
        </div>
        <script>
            $(window).load(function () {
                $('.flexslider').flexslider({
                    animation: "slide",
                    rtl: true
                });
            });
        </script>
    </div>

    <div class="row margin-top-60">
        <div class="col-3 padding-lr">
            <div>
                <img width="100%" class="img-padrao" src="Images/si1.png" />
            </div>
            <div class="font-12">
                <h4>Sobre Analise de Sistemas</h4>
                O Curso Analise e Desenvolvimento de Sistemas, possui sua parte de analise e exames, preparando profissionais que queiram seguir a área de Analista.
            </div>
            <asp:HyperLink ID="HyperLink1" NavigateUrl="Ads.aspx" runat="server">Saiba mais...</asp:HyperLink>
        </div>

        <div class="col-3 padding-lr">
            <div>
                <img width="100%" class="img-padrao" src="Images/si2.png" />
            </div>
            <div class="font-12">
                <h4>Sobre linguagens de Programação</h4>
                As linguagens de Programação abordadas durante o curso, tem como objetivo te preparar para ser um ótimo profiossional.

            </div>
            <asp:HyperLink ID="HyperLink2" NavigateUrl="Linguagens.aspx" runat="server">Saiba mais...</asp:HyperLink>

        </div>

        <div class="col-3 padding-lr">
            <div>
                <img width="100%" class="img-padrao" src="Images/si3.png" />
            </div>
            <div class="font-12">
                <h4>Projeto de Sistemas </h4>
                Projetar sistemas exige conhecimentos prévios e metódos, através do curso você terá capacidade de projetar seus sistemas.
            </div>
            <asp:HyperLink ID="HyperLink3" NavigateUrl="ADS.aspx" runat="server" class="learn-more" >Saiba mais...</asp:HyperLink>

        </div>

        <div class="col-3 padding-lr">
            <div>
                <img width="100%" class="img-padrao" src="Images/si4.jpeg" />
            </div>
            <div class="font-12">
                <h4>Aplicativos para Mobile</h4>

                A programação mobile também é de notória importancia, venha aprender a fazer aplicativos de celular e a entender sua importancia.

            </div>
            <asp:HyperLink ID="HyperLink4" NavigateUrl="ADS.aspx" runat="server">Saiba mais...</asp:HyperLink>
        </div>
    </div>
    <br />
    <div class="row box-programador">
        <div class="col-12">
            <div class="border">
                <img width="100px" class="img-center" src="Images/programador.png" />
                <div class="font-12 center">
                    <h4>Programação</h4>
                    Quer ser um programador? faça o curso de Analise e Desenvolvimento de Sistema da Fatec de Americana.
                </div>
                <asp:HyperLink ID="HyperLink5" NavigateUrl="http://www.fatec.edu.br" Target="_blank" runat="server">  Saiba mais...</asp:HyperLink>
            </div>

        </div>
    </div>

</asp:Content>
