<%@ Page Title="" Language="C#" MasterPageFile="~/Projeto.Master" AutoEventWireup="true" CodeBehind="ADS.aspx.cs" Inherits="Projeto3.ADS" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="Content" runat="server">
    <div class="content-wrapper">

        <div class="row sobre-ads">
            <div class="col-6 padding-lr">
                <img src="Images/img-ads.png" class="img-ads"/>
            </div>
            <div class="col-6 padding-lr custom-box">
                <h2>Sobre o Curso na FATEC Americana: </h2><br />
                <p class="bold">Possui a duração de 6 semestres </p> <br /><br />
                <p class="bold">Carga Horária: </p> 
                   2400 horas  <br />
                   240 horas de Estágio Curricular <br />
               <p> 160 horas de Trabalho de Graduação</p>
            </div>
        </div>

        <div class="box-radius">
            <div class="center">
                <asp:HyperLink ID="HyperLink5" NavigateUrl="Espec.aspx" Target="_blank" runat="server">Clique Aqui! Para ver as áreas em que você pode trabalhar ao cursar Análise e Desenvolvimento de Sistemas</asp:HyperLink>
            </div>
        </div>

    </div>


</asp:Content>
